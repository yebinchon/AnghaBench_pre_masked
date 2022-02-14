
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  static const char * VAR_3[5] =
  {
    "0.3010299956639811952256464283594894482",
    "0.6931471805599453094286904741849753009",
    "1.4426950408889634073876517827983434472",
    "3.3219280948873623478083405569094566090",
    "3.1415926535897932385128089594061862044",
  };
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
    {
      FUNC_1 (&VAR_2[VAR_4], VAR_3[VAR_4]);

      FUNC_0 (&VAR_2[VAR_4],
      VAR_0, &VAR_2[VAR_4]);
    }

  VAR_1 = 1;
}
