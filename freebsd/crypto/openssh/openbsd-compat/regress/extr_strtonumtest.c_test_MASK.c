
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 long long FUNC_1 (char const*,long long,long long,char const**) ;

void
FUNC_2(const char *VAR_2, long long VAR_3, long long VAR_4, int VAR_5)
{
 long long VAR_6;
 const char *VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_7);
 if (VAR_5 && VAR_7 != ((void*)0)) {
  FUNC_0(VAR_1, "%s [%lld-%lld] ", VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_1, "NUMBER NOT ACCEPTED %s\n", VAR_7);
  VAR_0 = 1;
 } else if (!VAR_5 && VAR_7 == ((void*)0)) {
  FUNC_0(VAR_1, "%s [%lld-%lld] %lld ", VAR_2, VAR_3, VAR_4, VAR_6);
  FUNC_0(VAR_1, "NUMBER ACCEPTED\n");
  VAR_0 = 1;
 }
}
