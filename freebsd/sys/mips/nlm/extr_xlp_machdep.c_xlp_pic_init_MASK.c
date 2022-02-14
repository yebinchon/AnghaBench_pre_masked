
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct timecounter {unsigned int member_2; char* member_4; int member_5; int member_3; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ,unsigned long long,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int ,int ,int,int ,int,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 struct timecounter* VAR_4 ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct timecounter VAR_6 = {
  VAR_3,
  0,
  ~0U,
  VAR_1,
  "XLRPIC",
  2000,
 };
        int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(0);
 VAR_8 = FUNC_5(FUNC_0(FUNC_2()),
     VAR_2);
        FUNC_6("Initializing PIC...@%jx %d IRTs\n", (uintmax_t)VAR_5,
     VAR_8);

        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
     FUNC_4(VAR_5, VAR_7, 0, 0, 1, 0,
     1, 0, 0x1);

 FUNC_3(VAR_5, VAR_0, ~0ULL, 0, 0);
 VAR_4 = &VAR_6;
}
