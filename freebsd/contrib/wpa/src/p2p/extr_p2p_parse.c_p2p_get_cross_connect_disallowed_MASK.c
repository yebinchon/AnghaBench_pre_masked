
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_message {int* manageability; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_message*,int ,int) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct p2p_message*) ;

int FUNC_2(const struct wpabuf *VAR_1)
{
 struct p2p_message VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 if (FUNC_1(VAR_1, &VAR_2))
  return 0;

 if (!VAR_2.manageability)
  return 0;

 return !(VAR_2.manageability[0] & VAR_0);
}
