
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (unsigned char*,int) ;
 unsigned char* VAR_3 ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5 (int VAR_4)
{
  unsigned char VAR_5[VAR_2];
  int VAR_6, VAR_7;
  char *VAR_8 = FUNC_1 (VAR_0);


  FUNC_2 (VAR_8, 0, VAR_0);

  VAR_5[0] = 18;
  VAR_5[1] = 1;
  VAR_5[2] = 0;
  VAR_7 = FUNC_3 (VAR_5, 3);

  for (VAR_6 = 0; VAR_6 < 4 * 6; ++VAR_6)
    VAR_8[VAR_6 + 4 * 32 + 8 * 32] = VAR_5[VAR_6];
  for (VAR_6 = 0; VAR_6 < 4 * 4; ++VAR_6)
    VAR_3[VAR_6] = VAR_5[VAR_6 + 4 * 7];

  VAR_5[0] = 18;
  VAR_5[1] = 2;
  VAR_5[2] = 0;
  VAR_7 = FUNC_3 (VAR_5, 3);

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    VAR_8[VAR_6] = VAR_5[VAR_6];



  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    FUNC_4 (VAR_6, &VAR_8[FUNC_0 (VAR_6)]);
}
