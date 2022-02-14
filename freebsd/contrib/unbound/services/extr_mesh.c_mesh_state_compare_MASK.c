
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int query_flags; int client_info; int qinfo; scalar_t__ is_valrec; scalar_t__ is_priming; } ;
struct mesh_state {scalar_t__ unique; TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;

int
FUNC_2(const void* VAR_2, const void* VAR_3)
{
 struct mesh_state* VAR_4 = (struct mesh_state*)VAR_2;
 struct mesh_state* VAR_5 = (struct mesh_state*)VAR_3;
 int VAR_6;

 if(VAR_4->unique < VAR_5->unique)
  return -1;
 if(VAR_4->unique > VAR_5->unique)
  return 1;

 if(VAR_4->s.is_priming && !VAR_5->s.is_priming)
  return -1;
 if(!VAR_4->s.is_priming && VAR_5->s.is_priming)
  return 1;

 if(VAR_4->s.is_valrec && !VAR_5->s.is_valrec)
  return -1;
 if(!VAR_4->s.is_valrec && VAR_5->s.is_valrec)
  return 1;

 if((VAR_4->s.query_flags&VAR_1) && !(VAR_5->s.query_flags&VAR_1))
  return -1;
 if(!(VAR_4->s.query_flags&VAR_1) && (VAR_5->s.query_flags&VAR_1))
  return 1;

 if((VAR_4->s.query_flags&VAR_0) && !(VAR_5->s.query_flags&VAR_0))
  return -1;
 if(!(VAR_4->s.query_flags&VAR_0) && (VAR_5->s.query_flags&VAR_0))
  return 1;

 VAR_6 = FUNC_1(&VAR_4->s.qinfo, &VAR_5->s.qinfo);
 if(VAR_6 != 0)
  return VAR_6;
 return FUNC_0(VAR_4->s.client_info, VAR_5->s.client_info);
}
