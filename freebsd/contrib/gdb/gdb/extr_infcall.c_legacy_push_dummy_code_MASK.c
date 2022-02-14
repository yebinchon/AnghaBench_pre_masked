
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int dummy ;
typedef scalar_t__ ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,struct value**,struct type*,int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,int) ;
 void* FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 int FUNC_7 (char*,int,scalar_t__) ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_9 (struct gdbarch *VAR_7,
   CORE_ADDR VAR_8, CORE_ADDR VAR_9, int VAR_10,
   struct value **VAR_11, int VAR_12,
   struct type *VAR_13,
   CORE_ADDR *VAR_14, CORE_ADDR *VAR_15)
{
  CORE_ADDR VAR_16;
  ULONGEST *VAR_17 = FUNC_3 (VAR_4);
  int VAR_18 = (VAR_3
         * VAR_4
         / sizeof (ULONGEST));
  char *VAR_19 = FUNC_3 (VAR_18);
  FUNC_6 (VAR_17, VAR_2,
   VAR_4);
  if (FUNC_2 (1, 2))
    {

      VAR_8 -= VAR_18;
      VAR_16 = VAR_8;
    }
  else
    {

      VAR_16 = VAR_8;
      VAR_8 += VAR_18;
    }






  {
    int VAR_20;
    for (VAR_20 = 0; VAR_20 < (int) (VAR_4 / sizeof (VAR_17[0]));
  VAR_20++)
      FUNC_7 (&VAR_19[VAR_20 * VAR_3],
         VAR_3,
         (ULONGEST) VAR_17[VAR_20]);
  }




  if (!FUNC_4 (VAR_6))
    {




      if (FUNC_1 ())
 {

   FUNC_0 (VAR_19, VAR_16, VAR_9, VAR_12, VAR_11,
         VAR_13, VAR_10);
 }
      (*VAR_14) = VAR_16;

    }


  (*VAR_15) = (*VAR_14) + VAR_0;


  (*VAR_14) += VAR_1;
  FUNC_8 (VAR_16, (char *) VAR_19, VAR_18);
  if (VAR_5)
    FUNC_5 (VAR_16, VAR_16 + VAR_18);
  return VAR_8;
}
