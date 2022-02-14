
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unichar ;
struct bin_messagetable_item {scalar_t__ data; int flags; int length; } ;
struct bin_messagetable {TYPE_1__* items; int cblocks; } ;
typedef size_t rc_uint_type ;
typedef int bfd_byte ;
struct TYPE_2__ {int offset; int highid; int lowid; } ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int const*,size_t) ;
 size_t FUNC_3 (int *,int ,int) ;
 size_t FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,size_t,int const*,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8 (FILE *VAR_5, rc_uint_type VAR_6, const bfd_byte *VAR_7)
{
  int VAR_8 = 0;
  const struct bin_messagetable *VAR_9;
  FUNC_1 (VAR_5, "BEGIN\n");

  FUNC_7 (VAR_5, VAR_6, VAR_7, 0, 0, 0);

  FUNC_1 (VAR_5, "\n");
  FUNC_6 (VAR_5, "MC syntax dump");
  if (VAR_6 < VAR_2)
    VAR_8 = 1;
  else
    do {
      rc_uint_type VAR_10, VAR_11;
      VAR_9 = (const struct bin_messagetable *) VAR_7;
      VAR_10 = FUNC_4 (&VAR_4, VAR_9->cblocks, VAR_6);
      if (VAR_6 < (VAR_2 + VAR_10 * VAR_0))
 {
   VAR_8 = 1;
   break;
 }
      for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
 {
   rc_uint_type VAR_12, VAR_13, VAR_14;
   const struct bin_messagetable_item *VAR_15;

   VAR_12 = FUNC_4 (&VAR_4, VAR_9->items[VAR_11].lowid, 4);
   VAR_13 = FUNC_4 (&VAR_4, VAR_9->items[VAR_11].highid, 4);
   VAR_14 = FUNC_4 (&VAR_4, VAR_9->items[VAR_11].offset, 4);
   while (VAR_12 <= VAR_13)
     {
       rc_uint_type VAR_16, VAR_17;
       if ((VAR_14 + VAR_1) > VAR_6)
  {
    VAR_8 = 1;
   break;
  }
       VAR_15 = (const struct bin_messagetable_item *) &VAR_7[VAR_14];
       VAR_16 = FUNC_3 (&VAR_4, VAR_15->length, 2);
       VAR_17 = FUNC_3 (&VAR_4, VAR_15->flags, 2);
       if ((VAR_14 + VAR_16) > VAR_6)
  {
    VAR_8 = 1;
    break;
  }
       FUNC_6 (VAR_5, "MessageId = 0x%x", VAR_12);
       FUNC_6 (VAR_5, "");
       if ((VAR_17 & VAR_3) == VAR_3)
  FUNC_2 (VAR_5, (const unichar *) VAR_15->data,
          (VAR_16 - VAR_1) / 2);
       else
  FUNC_0 (VAR_5, (const char *) VAR_15->data,
        (VAR_16 - VAR_1));
       FUNC_6 (VAR_5,"");
       ++VAR_12;
       VAR_14 += VAR_16;
     }
 }
    } while (0);
  if (VAR_8)
    FUNC_6 (VAR_5, "Illegal data");
  FUNC_5 (VAR_5);
  FUNC_1 (VAR_5, "END\n");
}
