
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (unsigned long long) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 unsigned long long FUNC_4 (struct pevent*) ;
 int FUNC_5 (char*,unsigned long long) ;
 int FUNC_6 (unsigned long long) ;

__attribute__((used)) static void FUNC_7(struct pevent *VAR_3)
{
 unsigned long long VAR_4;
 char *VAR_5;
 char VAR_6[VAR_0];

 FUNC_5(VAR_6, 12);

 if (FUNC_3(VAR_6, "header_page", 12) != 0)
  FUNC_0("did not read header page");

 VAR_4 = FUNC_4(VAR_3);
 FUNC_6(VAR_4);





 VAR_2 = VAR_1;

 FUNC_5(VAR_6, 13);
 if (FUNC_3(VAR_6, "header_event", 13) != 0)
  FUNC_0("did not read header event");

 VAR_4 = FUNC_4(VAR_3);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_5(VAR_5, VAR_4);
 FUNC_1(VAR_5);
}
