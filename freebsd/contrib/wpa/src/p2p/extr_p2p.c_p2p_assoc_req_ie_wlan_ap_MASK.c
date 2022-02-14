
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_message {scalar_t__ manageability; } ;
struct p2p_data {scalar_t__ num_groups; int dev_capab; scalar_t__ cross_connect; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (struct p2p_message*,int ,int) ;
 int FUNC_2 (struct wpabuf*,int,int ) ;
 int * FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,struct p2p_data*) ;
 int FUNC_5 (struct wpabuf*,int *) ;
 int FUNC_6 (struct p2p_data*,char*,char*) ;
 scalar_t__ FUNC_7 (struct wpabuf*,struct p2p_message*) ;
 struct wpabuf* FUNC_8 (int) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 size_t FUNC_11 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_12(struct p2p_data *VAR_4, const u8 *VAR_5,
        u8 *VAR_6, size_t VAR_7, struct wpabuf *VAR_8)
{
 struct wpabuf *VAR_9;
 u8 *VAR_10;
 size_t VAR_11;
 int VAR_12;
 u8 VAR_13;
 struct p2p_message VAR_14;

 if (VAR_8 == ((void*)0))
  return 0;

 FUNC_1(&VAR_14, 0, sizeof(VAR_14));
 if (FUNC_7(VAR_8, &VAR_14) < 0)
  return 0;

 FUNC_6(VAR_4, "BSS P2P manageability %s",
  VAR_14.manageability ? "enabled" : "disabled");

 if (!VAR_14.manageability)
  return 0;







 VAR_9 = FUNC_8(200);
 if (VAR_9 == ((void*)0))
  return -1;

 VAR_10 = FUNC_3(VAR_9);
 VAR_13 = 0;
 if (VAR_4->num_groups > 0) {
  VAR_13 |= VAR_3;
  if ((VAR_4->dev_capab & VAR_0) &&
      (VAR_4->dev_capab & VAR_1) &&
      VAR_4->cross_connect)
   VAR_13 |= VAR_2;
 }
 FUNC_2(VAR_9, VAR_4->dev_capab, VAR_13);
 if ((VAR_4->dev_capab & VAR_0) &&
     (VAR_4->dev_capab & VAR_1))
  FUNC_4(VAR_9, VAR_4);
 FUNC_5(VAR_9, VAR_10);

 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11 > VAR_7)
  VAR_12 = -1;
 else {
  FUNC_0(VAR_6, FUNC_10(VAR_9), VAR_11);
  VAR_12 = VAR_11;
 }
 FUNC_9(VAR_9);

 return VAR_12;
}
