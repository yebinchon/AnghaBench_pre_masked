
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ulong_t ;
typedef int ctf_id_t ;
struct TYPE_11__ {char* dmd_name; int dmd_value; int dmd_offset; int dmd_type; } ;
typedef TYPE_3__ ctf_dmdef_t ;
struct TYPE_12__ {TYPE_5__* ctb_file; TYPE_2__* ctb_dtd; } ;
typedef TYPE_4__ ctf_bundle_t ;
struct TYPE_13__ {int ctf_flags; int ctf_dtstrlen; } ;
struct TYPE_9__ {int dtu_members; } ;
struct TYPE_10__ {TYPE_1__ dtd_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, ctf_id_t VAR_3, ulong_t VAR_4, void *VAR_5)
{
 ctf_bundle_t *VAR_6 = VAR_5;
 ctf_dmdef_t *VAR_7;
 char *VAR_8 = ((void*)0);

 if ((VAR_7 = FUNC_0(sizeof (ctf_dmdef_t))) == ((void*)0))
  return (FUNC_3(VAR_6->ctb_file, VAR_0));

 if (VAR_2 != ((void*)0) && (VAR_8 = FUNC_4(VAR_2)) == ((void*)0)) {
  FUNC_1(VAR_7, sizeof (ctf_dmdef_t));
  return (FUNC_3(VAR_6->ctb_file, VAR_0));
 }





 VAR_7->dmd_name = VAR_8;
 VAR_7->dmd_type = VAR_3;
 VAR_7->dmd_offset = VAR_4;
 VAR_7->dmd_value = -1;

 FUNC_2(&VAR_6->ctb_dtd->dtd_u.dtu_members, VAR_7);

 if (VAR_8 != ((void*)0))
  VAR_6->ctb_file->ctf_dtstrlen += FUNC_5(VAR_8) + 1;

 VAR_6->ctb_file->ctf_flags |= VAR_1;
 return (0);
}
