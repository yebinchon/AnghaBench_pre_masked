
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TTRACE_ARG_TYPE ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

int
FUNC_2 (int VAR_4, CORE_ADDR VAR_5, LONGEST VAR_6)
{
  int VAR_7;
  int VAR_8;
  CORE_ADDR VAR_9;
  int VAR_10;
  int VAR_11;
  LONGEST VAR_12;





  VAR_7 = 0;







  VAR_8 = 1;


  VAR_3 = 0;
  VAR_10 = FUNC_1 (VAR_2);





  if (VAR_3 || (VAR_10 <= 0))
    {
      VAR_3 = 0;
      return 0;
    }

  VAR_9 = (VAR_5 / VAR_10) * VAR_10;
  VAR_12 = VAR_6 / (LONGEST) VAR_10;

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++, VAR_9 += VAR_10)
    {
      int VAR_13;
      int VAR_14;


      VAR_3 = 0;
      VAR_13 = FUNC_0 (VAR_1,
          VAR_4,
          (TTRACE_ARG_TYPE) VAR_9,
          VAR_0,
          (TTRACE_ARG_TYPE) & VAR_14);
      if (VAR_3 || (VAR_13 < 0))
 {
   VAR_3 = 0;
   VAR_8 = 0;
   break;
 }


    }

  return (!VAR_7 && VAR_8);
}
