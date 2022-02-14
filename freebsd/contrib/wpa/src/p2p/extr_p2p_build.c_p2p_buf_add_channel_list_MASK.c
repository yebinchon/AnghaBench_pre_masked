
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_reg_class {int reg_class; int channels; char const* channel; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int * FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,char const*,int) ;
 int FUNC_4 (struct wpabuf*,int) ;

void FUNC_5(struct wpabuf *VAR_2, const char *VAR_3,
         struct p2p_channels *VAR_4)
{
 u8 *VAR_5;
 size_t VAR_6;


 FUNC_4(VAR_2, VAR_1);
 VAR_5 = FUNC_2(VAR_2, 2);
 FUNC_3(VAR_2, VAR_3, 3);

 for (VAR_6 = 0; VAR_6 < VAR_4->reg_classes; VAR_6++) {
  struct p2p_reg_class *VAR_7 = &VAR_4->reg_class[VAR_6];
  FUNC_4(VAR_2, VAR_7->reg_class);
  FUNC_4(VAR_2, VAR_7->channels);
  FUNC_3(VAR_2, VAR_7->channel, VAR_7->channels);
 }


 FUNC_0(VAR_5, (u8 *) FUNC_2(VAR_2, 0) - VAR_5 - 2);
 FUNC_1(VAR_0, "P2P: * Channel List",
      VAR_5 + 2, (u8 *) FUNC_2(VAR_2, 0) - VAR_5 - 2);
}
