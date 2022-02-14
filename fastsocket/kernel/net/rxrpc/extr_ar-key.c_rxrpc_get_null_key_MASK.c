
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct cred {int dummy; } ;


 struct key* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_2 () ;
 struct key* FUNC_3 (int *,char const*,int ,int ,struct cred const*,int ,int ) ;
 int FUNC_4 (struct key*,int *,int ,int *,int *) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int VAR_2 ;

struct key *FUNC_7(const char *VAR_3)
{
 const struct cred *VAR_4 = FUNC_2();
 struct key *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_2, VAR_3, 0, 0, VAR_4,
   VAR_1, VAR_0);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_4(VAR_5, ((void*)0), 0, ((void*)0), ((void*)0));
 if (VAR_6 < 0) {
  FUNC_6(VAR_5);
  FUNC_5(VAR_5);
  return FUNC_0(VAR_6);
 }

 return VAR_5;
}
