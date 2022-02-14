
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ lzma_ret ;
typedef scalar_t__ lzma_action ;
struct TYPE_13__ {int src_eof; int src_name; } ;
typedef TYPE_1__ file_pair ;
struct TYPE_16__ {int u8; } ;
struct TYPE_15__ {int u8; } ;
struct TYPE_14__ {scalar_t__ avail_out; int avail_in; int next_out; int next_in; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int const) ;
 scalar_t__ VAR_17 ;
 int FUNC_1 () ;
 TYPE_9__ VAR_18 ;
 int FUNC_2 (TYPE_1__*,int) ;
 void* FUNC_3 (TYPE_1__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_3__*,void*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (scalar_t__,void*) ;
 int FUNC_13 () ;
 scalar_t__* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_3__ VAR_24 ;
 int FUNC_14 (scalar_t__*,scalar_t__*,size_t*) ;
 TYPE_2__ VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static bool
FUNC_15(file_pair *VAR_27)
{





 lzma_action VAR_28 = VAR_27->src_eof ? VAR_3 : VAR_8;

 lzma_ret VAR_29;


 bool VAR_30 = 0;






 uint64_t VAR_31 = VAR_15;



 uint64_t VAR_32 = 0;


 size_t VAR_33 = 0;



 if (VAR_22 == VAR_12 && VAR_21 == VAR_0) {



  if (FUNC_1() == 1 && VAR_20 > 0)
   VAR_31 = VAR_20;
  if (VAR_19 != ((void*)0)) {
   if (VAR_31 < VAR_19[VAR_33]) {
    FUNC_0(FUNC_1() == 1);
    VAR_32 = VAR_19[VAR_33]
      - VAR_31;
   } else {
    VAR_31 = VAR_19[VAR_33];
   }
  }
 }

 VAR_25.next_out = VAR_24.u8;
 VAR_25.avail_out = VAR_1;

 while (!VAR_26) {


  if (VAR_25.avail_in == 0 && VAR_28 == VAR_8) {
   VAR_25.next_in = VAR_18.u8;
   VAR_25.avail_in = FUNC_3(VAR_27, &VAR_18,
     FUNC_12(VAR_31,
      VAR_1));

   if (VAR_25.avail_in == VAR_14)
    break;

   if (VAR_27->src_eof) {
    VAR_28 = VAR_3;

   } else if (VAR_31 != VAR_15) {


    VAR_31 -= VAR_25.avail_in;
    if (VAR_31 == 0)
     VAR_28 = VAR_4;
   }

   if (VAR_28 == VAR_8 && VAR_17)
    VAR_28 = VAR_10;
  }


  VAR_29 = FUNC_5(&VAR_25, VAR_28);


  if (VAR_25.avail_out == 0) {
   if (VAR_22 != VAR_13 && FUNC_4(VAR_27, &VAR_24,
     VAR_1 - VAR_25.avail_out))
    break;

   VAR_25.next_out = VAR_24.u8;
   VAR_25.avail_out = VAR_1;
  }

  if (VAR_29 == VAR_9 && (VAR_28 == VAR_10
    || VAR_28 == VAR_4)) {
   if (VAR_28 == VAR_10) {



    if (FUNC_4(VAR_27, &VAR_24, VAR_1
      - VAR_25.avail_out))
     break;

    VAR_25.next_out = VAR_24.u8;
    VAR_25.avail_out = VAR_1;


    FUNC_13();
   } else {

    if (VAR_19 == ((void*)0)) {
     FUNC_0(FUNC_1() == 1);
     FUNC_0(VAR_20 > 0);
     VAR_31 = VAR_20;
    } else {
     FUNC_14(&VAR_31,
       &VAR_32,
       &VAR_33);
    }
   }



   VAR_28 = VAR_8;

  } else if (VAR_29 != VAR_7) {


   const bool VAR_34 = VAR_29 != VAR_6
     && VAR_29 != VAR_11;

   if (VAR_34) {





    if (VAR_22 != VAR_13 && FUNC_4(VAR_27,
      &VAR_24, VAR_1
       - VAR_25.avail_out))
     break;
   }

   if (VAR_29 == VAR_9) {
    if (VAR_23) {
     FUNC_2(VAR_27, VAR_25.avail_in);
     VAR_30 = 1;
     break;
    }




    if (VAR_25.avail_in == 0 && !VAR_27->src_eof) {




     VAR_25.avail_in = FUNC_3(
       VAR_27, &VAR_18, 1);
     if (VAR_25.avail_in == VAR_14)
      break;

     FUNC_0(VAR_25.avail_in == 0
       || VAR_25.avail_in == 1);
    }

    if (VAR_25.avail_in == 0) {
     FUNC_0(VAR_27->src_eof);
     VAR_30 = 1;
     break;
    }


    VAR_29 = VAR_2;
    FUNC_0(VAR_34);
   }




   if (VAR_34) {
    FUNC_7("%s: %s", VAR_27->src_name,
      FUNC_10(VAR_29));
   } else {
    FUNC_11("%s: %s", VAR_27->src_name,
      FUNC_10(VAR_29));



    FUNC_0(VAR_22 != VAR_12);
   }

   if (VAR_29 == VAR_5) {


    FUNC_8(VAR_16,
      FUNC_6(&VAR_25));
   }

   if (VAR_34)
    break;
  }


  FUNC_9();
 }

 return VAR_30;
}
