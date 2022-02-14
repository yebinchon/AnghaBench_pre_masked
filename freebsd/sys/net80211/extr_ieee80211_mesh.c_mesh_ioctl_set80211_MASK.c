
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int tmpproto ;
struct ieee80211vap {scalar_t__ iv_opmode; int iv_myaddr; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211req {int i_type; int i_len; int i_data; int i_val; } ;
struct ieee80211_mesh_state {int ms_idlen; char ms_ttl; int ms_flags; int ms_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (struct ieee80211vap*,char*,int *) ;
 int FUNC_3 (struct ieee80211vap*,int ) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct ieee80211vap*) ;
 int FUNC_8 (struct ieee80211vap*,char*) ;
 int FUNC_9 (struct ieee80211vap*,char*) ;

__attribute__((used)) static int
FUNC_10(struct ieee80211vap *VAR_12, struct ieee80211req *VAR_13)
{
 struct ieee80211_mesh_state *VAR_14 = VAR_12->iv_mesh;
 uint8_t VAR_15[VAR_10];
 uint8_t VAR_16[VAR_3];
 char VAR_17[VAR_8];
 int VAR_18;

 if (VAR_12->iv_opmode != VAR_9)
  return VAR_2;

 VAR_18 = 0;
 switch (VAR_13->i_type) {
 case 136:
  if (VAR_13->i_val != 0 || VAR_13->i_len > VAR_7)
   return VAR_0;
  VAR_18 = FUNC_1(VAR_13->i_data, VAR_15, VAR_13->i_len);
  if (VAR_18 != 0)
   break;
  FUNC_6(VAR_14->ms_id, 0, VAR_10);
  VAR_14->ms_idlen = VAR_13->i_len;
  FUNC_5(VAR_14->ms_id, VAR_15, VAR_13->i_len);
  VAR_18 = VAR_1;
  break;
 case 139:
  if (VAR_13->i_val)
   VAR_14->ms_flags |= VAR_4;
  else
   VAR_14->ms_flags &= ~VAR_4;
  VAR_18 = VAR_1;
  break;
 case 138:
  if (VAR_13->i_val)
   VAR_14->ms_flags |= VAR_5;
  else
   VAR_14->ms_flags &= ~VAR_5;
  FUNC_7(VAR_12);
  break;
 case 137:
  if (VAR_13->i_val)
   VAR_14->ms_flags |= VAR_6;
  else
   VAR_14->ms_flags &= ~VAR_6;
  break;
 case 132:
  VAR_14->ms_ttl = (uint8_t) VAR_13->i_val;
  break;
 case 133:
  switch (VAR_13->i_val) {
  case 128:
   return VAR_0;
  case 129:
   FUNC_4(VAR_12);
   break;
  case 131:
   if (FUNC_0(VAR_12->iv_myaddr, VAR_13->i_data) ||
       FUNC_0(VAR_11, VAR_13->i_data))
    return VAR_0;
   VAR_18 = FUNC_1(VAR_13->i_data, &VAR_16,
       VAR_3);
   if (VAR_18 == 0)
    FUNC_2(VAR_12, VAR_16, ((void*)0));
   break;
  case 130:
   FUNC_3(VAR_12, VAR_13->i_data);
   break;
  default:
   return VAR_2;
  }
  break;
 case 135:
  VAR_18 = FUNC_1(VAR_13->i_data, VAR_17, sizeof(VAR_17));
  if (VAR_18 == 0) {
   VAR_18 = FUNC_8(VAR_12, VAR_17);
   if (VAR_18 == 0)
    VAR_18 = VAR_1;
  }
  break;
 case 134:
  VAR_18 = FUNC_1(VAR_13->i_data, VAR_17, sizeof(VAR_17));
  if (VAR_18 == 0) {
   VAR_18 = FUNC_9(VAR_12, VAR_17);
   if (VAR_18 == 0)
    VAR_18 = VAR_1;
  }
  break;
 default:
  return VAR_2;
 }
 return VAR_18;
}
