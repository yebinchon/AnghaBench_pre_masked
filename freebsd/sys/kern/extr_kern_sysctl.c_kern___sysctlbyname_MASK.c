
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int oid ;
typedef int namebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,char*,size_t) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct thread*,int*,int,int*,size_t*,void*,size_t,size_t*,int) ;
 char* FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (struct thread*,int*,size_t,void*,size_t*,int,void*,size_t,size_t*,int) ;

int
FUNC_5(struct thread *VAR_7, const char *VAR_8, size_t VAR_9,
    void *VAR_10, size_t *VAR_11, void *VAR_12, size_t VAR_13, size_t *VAR_14,
    int VAR_15, bool VAR_16)
{
 int VAR_17[VAR_0];
 char VAR_18[16];
 char *VAR_19;
 size_t VAR_20;
 int VAR_21;

 if (VAR_9 > VAR_4 || VAR_9 == 0)
  return (VAR_3);
 VAR_19 = VAR_18;
 if (VAR_9 > sizeof(VAR_18))
  VAR_19 = FUNC_3(VAR_9, VAR_5, VAR_6);
 VAR_21 = FUNC_0(VAR_8, VAR_19, VAR_9);
 if (VAR_21 != 0)
  goto out;

 VAR_17[0] = VAR_1;
 VAR_17[1] = VAR_2;
 VAR_20 = sizeof(VAR_17);
 VAR_21 = FUNC_2(VAR_7, VAR_17, 2, VAR_17, &VAR_20, (void *)VAR_19, VAR_9,
     VAR_14, VAR_15);
 if (VAR_21 != 0)
  goto out;
 VAR_21 = FUNC_4(VAR_7, VAR_17, *VAR_14 / sizeof(int), VAR_10, VAR_11,
     VAR_16, VAR_12, VAR_13, VAR_14, VAR_15);

out:
 if (VAR_9 > sizeof(VAR_18))
  FUNC_1(VAR_19, VAR_5);
 return (VAR_21);
}
