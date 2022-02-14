
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;
typedef int cap_channel_t ;


 int FUNC_0 (int *,char const*,char const*,int ,int *,int ,int ,struct passwd**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct passwd *
FUNC_1(cap_channel_t *VAR_4, const char *VAR_5, const char *VAR_6,
    uid_t VAR_7)
{
 struct passwd *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = VAR_0;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_3, VAR_1,
     VAR_2, &VAR_8);
 if (VAR_9 != 0) {
  VAR_0 = VAR_9;
  return (((void*)0));
 }

 VAR_0 = VAR_10;

 return (VAR_8);
}
