
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int tbl ;
struct pfr_table {int pfrt_flags; int pfrt_anchor; int pfrt_name; } ;
struct pfr_buffer {int pfrb_size; int pfrb_caddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pfr_table*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct pfr_table*,int ,int ,int *,int *,int ,int ) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(char *VAR_1, int VAR_2, int VAR_3, const char *VAR_4,
    struct pfr_buffer *VAR_5, u_int32_t VAR_6)
{
 struct pfr_table VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 if (FUNC_3(VAR_7.pfrt_name, VAR_1, sizeof(VAR_7.pfrt_name)) >=
     sizeof(VAR_7.pfrt_name) || FUNC_3(VAR_7.pfrt_anchor, VAR_4,
     sizeof(VAR_7.pfrt_anchor)) >= sizeof(VAR_7.pfrt_anchor))
  FUNC_1(1, "pfctl_define_table: strlcpy");
 VAR_7.pfrt_flags = VAR_2;

 return FUNC_2(&VAR_7, VAR_5->pfrb_caddr, VAR_5->pfrb_size, ((void*)0),
     ((void*)0), VAR_6, VAR_3 ? VAR_0 : 0);
}
