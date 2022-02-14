
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct key {int dummy; } ;
struct cred {int dummy; } ;
typedef int gid_t ;


 struct key* FUNC_0 (int) ;
 int FUNC_1 (struct key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_2 (int *,char const*,int ,int ,struct cred const*,int,unsigned long) ;
 int FUNC_3 (struct key*,int *,int ,struct key*,int *) ;
 int FUNC_4 (struct key*) ;
 int VAR_3 ;

struct key *FUNC_5(const char *VAR_4, uid_t VAR_5, gid_t VAR_6,
     const struct cred *VAR_7, unsigned long VAR_8,
     struct key *VAR_9)
{
 struct key *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(&VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7,
       (VAR_0 & ~VAR_1) | VAR_2,
       VAR_8);

 if (!FUNC_1(VAR_10)) {
  VAR_11 = FUNC_3(VAR_10, ((void*)0), 0, VAR_9, ((void*)0));
  if (VAR_11 < 0) {
   FUNC_4(VAR_10);
   VAR_10 = FUNC_0(VAR_11);
  }
 }

 return VAR_10;
}
