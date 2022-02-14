
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_5__ {char const* dh_name; int dh_hashsz; scalar_t__ dh_maxid; scalar_t__ dh_minid; scalar_t__ dh_nextid; int const* dh_tmpl; } ;
typedef TYPE_1__ dt_idhash_t ;
typedef int dt_ident_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_2 (size_t) ;

dt_idhash_t *
FUNC_3(const char *VAR_1, const dt_ident_t *VAR_2,
    uint_t VAR_3, uint_t VAR_4)
{
 dt_idhash_t *VAR_5;
 size_t VAR_6;

 FUNC_0(VAR_3 <= VAR_4);

 VAR_6 = sizeof (dt_idhash_t) +
     sizeof (dt_ident_t *) * (VAR_0 - 1);

 if ((VAR_5 = FUNC_2(VAR_6)) == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_5, VAR_6);
 VAR_5->dh_name = VAR_1;
 VAR_5->dh_tmpl = VAR_2;
 VAR_5->dh_nextid = VAR_3;
 VAR_5->dh_minid = VAR_3;
 VAR_5->dh_maxid = VAR_4;
 VAR_5->dh_hashsz = VAR_0;

 return (VAR_5);
}
