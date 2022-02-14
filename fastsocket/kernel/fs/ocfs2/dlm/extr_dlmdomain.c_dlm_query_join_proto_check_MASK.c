
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_protocol_version {int pv_minor; int pv_major; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_protocol_version*,struct dlm_protocol_version*) ;
 int FUNC_1 (int ,char*,int,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, int VAR_2,
          struct dlm_protocol_version *VAR_3,
          struct dlm_protocol_version *VAR_4)
{
 int VAR_5;
 struct dlm_protocol_version VAR_6 = *VAR_4;

 if (!FUNC_0(VAR_3, &VAR_6)) {
  FUNC_1(0,
       "node %u wanted to join with %s locking protocol "
       "%u.%u, we respond with %u.%u\n",
       VAR_2, VAR_1,
       VAR_4->pv_major,
       VAR_4->pv_minor,
       VAR_6.pv_major, VAR_6.pv_minor);
  VAR_4->pv_minor = VAR_6.pv_minor;
  VAR_5 = 0;
 } else {
  FUNC_1(VAR_0,
       "Node %u wanted to join with %s locking "
       "protocol %u.%u, but we have %u.%u, disallowing\n",
       VAR_2, VAR_1,
       VAR_4->pv_major,
       VAR_4->pv_minor,
       VAR_3->pv_major,
       VAR_3->pv_minor);
  VAR_5 = 1;
 }

 return VAR_5;
}
