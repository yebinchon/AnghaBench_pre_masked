
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set_type {scalar_t__ protocol; int revision; int family; int name; int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ,int ,...) ;

int
FUNC_7(struct ip_set_type *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->protocol != VAR_1) {
  FUNC_6("ip_set type %s, family %s, revision %u uses "
      "wrong protocol version %u (want %u)\n",
      VAR_3->name, FUNC_0(VAR_3->family),
      VAR_3->revision, VAR_3->protocol, VAR_1);
  return -VAR_0;
 }

 FUNC_2();
 if (FUNC_1(VAR_3->name, VAR_3->family, VAR_3->revision)) {

  FUNC_6("ip_set type %s, family %s, revision %u "
      "already registered!\n", VAR_3->name,
      FUNC_0(VAR_3->family), VAR_3->revision);
  VAR_4 = -VAR_0;
  goto unlock;
 }
 FUNC_4(&VAR_3->list, &VAR_2);
 FUNC_5("type %s, family %s, revision %u registered.\n",
   VAR_3->name, FUNC_0(VAR_3->family), VAR_3->revision);
unlock:
 FUNC_3();
 return VAR_4;
}
