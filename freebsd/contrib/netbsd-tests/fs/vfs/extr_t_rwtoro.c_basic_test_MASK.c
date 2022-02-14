
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct null_args {int nulla_target; } ;
typedef int nargs ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct null_args*,int ,int) ;
 int FUNC_3 (int const*,char const*,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int ,char const*,int ,struct null_args*,int) ;
 int FUNC_6 (char const*,int ) ;
 void FUNC_7 (char const*) ;
 void FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(const atf_tc_t *VAR_1, const char *VAR_2, int VAR_3,
    bool VAR_4, void (*VAR_5)(const char *), void (*VAR_6)(const char *))
{
 const char *VAR_7 = "/nullm";
 struct null_args VAR_8;

 if (VAR_4) {
  FUNC_0(FUNC_4(VAR_7, 0777));
  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.nulla_target = FUNC_1(VAR_2);;
  FUNC_0(FUNC_5(VAR_0, VAR_7, 0,
      &VAR_8, sizeof(VAR_8)));
 }
 if (VAR_5)
  (*VAR_5)(VAR_4 ? VAR_7 : VAR_2);
 FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  (*VAR_6)(VAR_4 ? VAR_7 : VAR_2);
 if (VAR_4)
  FUNC_0(FUNC_6(VAR_7, 0));
}
