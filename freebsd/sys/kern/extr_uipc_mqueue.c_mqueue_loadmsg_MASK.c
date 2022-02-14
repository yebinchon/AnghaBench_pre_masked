
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_msg {size_t msg_size; int msg_prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,size_t) ;
 int FUNC_1 (struct mqueue_msg*,int ) ;
 struct mqueue_msg* FUNC_2 (size_t,int ,int ) ;

__attribute__((used)) static struct mqueue_msg *
FUNC_3(const char *VAR_2, size_t VAR_3, int VAR_4)
{
 struct mqueue_msg *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = sizeof(struct mqueue_msg) + VAR_3;
 VAR_5 = FUNC_2(VAR_6, VAR_0, VAR_1);
 VAR_7 = FUNC_0(VAR_2, ((char *)VAR_5) + sizeof(struct mqueue_msg),
     VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_5, VAR_0);
  VAR_5 = ((void*)0);
 } else {
  VAR_5->msg_size = VAR_3;
  VAR_5->msg_prio = VAR_4;
 }
 return (VAR_5);
}
