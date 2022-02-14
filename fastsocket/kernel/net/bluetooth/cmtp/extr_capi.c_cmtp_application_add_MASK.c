
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int applications; } ;
struct cmtp_application {int list; int appl; int state; } ;
typedef int __u16 ;


 int FUNC_0 (char*,struct cmtp_session*,struct cmtp_application*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cmtp_application* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct cmtp_application *FUNC_3(struct cmtp_session *VAR_2, __u16 VAR_3)
{
 struct cmtp_application *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);

 FUNC_0("session %p application %p appl %d", VAR_2, VAR_4, VAR_3);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->state = VAR_0;
 VAR_4->appl = VAR_3;

 FUNC_2(&VAR_4->list, &VAR_2->applications);

 return VAR_4;
}
