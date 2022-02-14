
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ avail_in; int avail_out; int * next_out; int * next_in; } ;
typedef TYPE_1__ lzma_stream ;
typedef int lzma_ret ;
typedef scalar_t__ lzma_action ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;


 int VAR_5 ;

 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int,int *) ;
 size_t const FUNC_5 (int *,int,size_t const,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (char*,char const*,...) ;
 int VAR_10 ;
 char const* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(lzma_stream *VAR_11, FILE *VAR_12, const char *VAR_13)
{
 lzma_ret VAR_14;





 VAR_14 = FUNC_8(VAR_11, VAR_8, VAR_3);



 if (VAR_14 != VAR_5) {
  FUNC_9("%s", VAR_14 == 129 ? FUNC_10(VAR_1)
    : "Internal error (bug)");
  FUNC_1(VAR_2);
 }


 uint8_t VAR_15[VAR_0];
 uint8_t VAR_16[VAR_0];

 VAR_11->avail_in = 0;
 VAR_11->next_out = VAR_16;
 VAR_11->avail_out = VAR_0;

 lzma_action VAR_17 = VAR_6;

 while (1) {
  if (VAR_11->avail_in == 0) {
   VAR_11->next_in = VAR_15;
   VAR_11->avail_in = FUNC_4(VAR_15, 1, VAR_0, VAR_12);

   if (FUNC_3(VAR_12)) {



    FUNC_9("%s: Error reading input file: %s",
      VAR_13, FUNC_10(VAR_9));
    FUNC_1(VAR_2);
   }




   if (FUNC_2(VAR_12))
    VAR_17 = VAR_4;

  }

  VAR_14 = FUNC_7(VAR_11, VAR_17);




  if (VAR_11->avail_out == 0 || VAR_14 != VAR_5) {
   const size_t VAR_18 = VAR_0 - VAR_11->avail_out;

   if (FUNC_5(VAR_16, 1, VAR_18, VAR_10)
     != VAR_18) {



    FUNC_9("Cannot write to standard output: "
      "%s", FUNC_10(VAR_9));
    FUNC_1(VAR_2);
   }

   VAR_11->next_out = VAR_16;
   VAR_11->avail_out = VAR_0;
  }

  if (VAR_14 != VAR_5) {
   if (VAR_14 == VAR_7) {
    FUNC_0(VAR_11->avail_in == 0);
    FUNC_0(VAR_17 == VAR_4);
    FUNC_0(FUNC_2(VAR_12));
    return;

   }

   const char *VAR_19;
   switch (VAR_14) {
   case 129:
    VAR_19 = FUNC_10(VAR_1);
    break;

   case 130:
    VAR_19 = "File format not recognized";
    break;

   case 128:

    VAR_19 = "Unsupported compression options";
    break;

   case 131:
    VAR_19 = "File is corrupt";
    break;

   case 132:
    VAR_19 = "Unexpected end of input";
    break;

   default:
    VAR_19 = "Internal error (bug)";
    break;
   }

   FUNC_9("%s: %s", VAR_13, VAR_19);
   FUNC_1(VAR_2);
  }
 }
}
