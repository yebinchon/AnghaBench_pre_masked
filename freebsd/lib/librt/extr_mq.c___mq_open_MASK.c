
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mq_attr {int dummy; } ;
struct __mq {int oshandle; int * node; } ;
typedef struct __mq* mqd_t ;
typedef int mode_t ;


 int FUNC_0 (char const*,int,int ,struct mq_attr const*) ;
 int VAR_0 ;
 int FUNC_1 (struct __mq*) ;
 struct __mq* FUNC_2 (int) ;

mqd_t
FUNC_3(const char *VAR_1, int VAR_2, mode_t VAR_3,
 const struct mq_attr *VAR_4)
{
 struct __mq *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(struct __mq));
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 VAR_5->oshandle = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5->oshandle != -1) {
  VAR_5->node = ((void*)0);
  return (VAR_5);
 }
 VAR_6 = VAR_0;
 FUNC_1(VAR_5);
 VAR_0 = VAR_6;
 return ((mqd_t)-1L);
}
