
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_message {void* p2p_attributes; void* wps_attributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p2p_message*,int ,int) ;
 int FUNC_1 (struct p2p_message*) ;
 scalar_t__ FUNC_2 (void*,struct p2p_message*) ;
 scalar_t__ FUNC_3 (void*,struct p2p_message*) ;
 int FUNC_4 (int ,char*,void*) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int const*,size_t) ;

int FUNC_7(const u8 *VAR_2, size_t VAR_3, const u8 *VAR_4,
      size_t VAR_5, struct p2p_message *VAR_6)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->wps_attributes = FUNC_6(VAR_2, VAR_3);
 if (VAR_6->wps_attributes &&
     FUNC_3(VAR_6->wps_attributes, VAR_6)) {
  FUNC_1(VAR_6);
  return -1;
 }

 VAR_6->p2p_attributes = FUNC_6(VAR_4, VAR_5);
 if (VAR_6->p2p_attributes &&
     FUNC_2(VAR_6->p2p_attributes, VAR_6)) {
  FUNC_5(VAR_0, "P2P: Failed to parse P2P IE data");
  if (VAR_6->p2p_attributes)
   FUNC_4(VAR_1, "P2P: P2P IE data",
     VAR_6->p2p_attributes);
  FUNC_1(VAR_6);
  return -1;
 }

 return 0;
}
