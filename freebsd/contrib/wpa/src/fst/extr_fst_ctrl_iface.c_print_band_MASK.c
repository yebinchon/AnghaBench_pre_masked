
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct fst_iface {int dummy; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fst_iface*,int*,int *) ;
 int FUNC_3 (struct fst_iface*) ;
 int FUNC_4 (struct fst_iface*) ;
 int FUNC_5 (struct fst_iface*) ;
 struct wpabuf* FUNC_6 (struct fst_iface*,int const*) ;
 int FUNC_7 (struct fst_iface*) ;
 scalar_t__ FUNC_8 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_9 (char*,size_t,int ,int ) ;
 int FUNC_10 (struct wpabuf const*) ;
 int FUNC_11 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_12(unsigned VAR_0, struct fst_iface *VAR_1, const u8 *VAR_2,
        char *VAR_3, size_t VAR_4)
{
 const struct wpabuf *VAR_5;
 enum hostapd_hw_mode VAR_6;
 u8 VAR_7;
 int VAR_8 = 0;

 FUNC_2(VAR_1, &VAR_6, &VAR_7);

 VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "band%u_frequency=%s\n",
      VAR_0, FUNC_0(FUNC_1(VAR_6)));
 VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "band%u_iface=%s\n",
      VAR_0, FUNC_5(VAR_1));
 VAR_5 = FUNC_6(VAR_1, VAR_2);
 if (VAR_5) {
  VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "band%u_mb_ies=",
       VAR_0);
  VAR_8 += FUNC_9(VAR_3 + VAR_8, VAR_4 - VAR_8,
     FUNC_10(VAR_5),
     FUNC_11(VAR_5));
  VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "\n");
 }
 VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "band%u_fst_group_id=%s\n",
      VAR_0, FUNC_3(VAR_1));
 VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "band%u_fst_priority=%u\n",
      VAR_0, FUNC_7(VAR_1));
 VAR_8 += FUNC_8(VAR_3 + VAR_8, VAR_4 - VAR_8, "band%u_fst_llt=%u\n",
      VAR_0, FUNC_4(VAR_1));

 return VAR_8;
}
