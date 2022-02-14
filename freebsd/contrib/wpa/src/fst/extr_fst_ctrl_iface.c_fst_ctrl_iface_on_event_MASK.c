
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fst_event_extra {int dummy; } fst_event_extra ;
typedef int u32 ;
struct fst_session {int dummy; } ;
struct fst_iface {int dummy; } ;
typedef enum fst_event_type { ____Placeholder_fst_event_type } fst_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct fst_iface*,int ,int,union fst_event_extra const*) ;
 int FUNC_1 (struct fst_session*) ;

__attribute__((used)) static void FUNC_2(enum fst_event_type VAR_1,
        struct fst_iface *VAR_2, struct fst_session *VAR_3,
        const union fst_event_extra *VAR_4)
{
 u32 VAR_5 = VAR_3 ? FUNC_1(VAR_3) : VAR_0;

 FUNC_0(VAR_2, VAR_5, VAR_1, VAR_4);
}
