
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ctf_id_t ;
struct TYPE_10__ {int ctf_flags; int ctf_refcnt; } ;
typedef TYPE_1__ ctf_file_t ;
struct TYPE_11__ {scalar_t__ dtd_ref; } ;
typedef TYPE_2__ ctf_dtdef_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 int * FUNC_2 (TYPE_1__**,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(ctf_file_t *VAR_6, ctf_id_t VAR_7)
{
 ctf_file_t *VAR_8;
 ctf_dtdef_t *VAR_9 = FUNC_1(VAR_6, VAR_7);

 if (!(VAR_6->ctf_flags & VAR_5))
  return (FUNC_3(VAR_6, VAR_2));






 VAR_8 = VAR_6;
 if (FUNC_2(&VAR_8, VAR_7) == ((void*)0) &&
     FUNC_1(VAR_6, VAR_7) == ((void*)0))
  return (VAR_0);

 if (VAR_9 == ((void*)0))
  return (FUNC_3(VAR_6, VAR_1));

 if (VAR_9->dtd_ref != 0 || VAR_6->ctf_refcnt > 1)
  return (FUNC_3(VAR_6, VAR_3));

 FUNC_0(VAR_6, VAR_9);
 VAR_6->ctf_flags |= VAR_4;
 return (0);
}
