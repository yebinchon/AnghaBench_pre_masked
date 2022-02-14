
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_elem; } ;
struct TYPE_5__ {scalar_t__ max_outstanding_io; TYPE_1__ taglist; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(pqisrc_softstate_t *VAR_3)
{
 int VAR_4 = VAR_1;
 int VAR_5 = VAR_0;

 FUNC_0((VAR_3->taglist.num_elem == VAR_3->max_outstanding_io), VAR_5);
 if (!VAR_5) {
  FUNC_1("Pending commands %x!!!",VAR_3->taglist.num_elem);
  VAR_4 = VAR_2;
 }
 return VAR_4;
}
