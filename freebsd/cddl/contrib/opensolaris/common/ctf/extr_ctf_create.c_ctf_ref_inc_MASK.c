
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ctf_id_t ;
struct TYPE_6__ {int ctf_flags; } ;
typedef TYPE_1__ ctf_file_t ;
struct TYPE_7__ {int dtd_ref; } ;
typedef TYPE_2__ ctf_dtdef_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(ctf_file_t *VAR_1, ctf_id_t VAR_2)
{
 ctf_dtdef_t *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
  return;

 if (!(VAR_1->ctf_flags & VAR_0))
  return;

 VAR_3->dtd_ref++;
}
