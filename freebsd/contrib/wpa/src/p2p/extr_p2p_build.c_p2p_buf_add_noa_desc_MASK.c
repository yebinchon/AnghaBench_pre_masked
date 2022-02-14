
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_noa_desc {int start_time; int interval; int duration; int count_type; } ;


 int FUNC_0 (struct wpabuf*,int ) ;
 int FUNC_1 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_2(struct wpabuf *VAR_0, struct p2p_noa_desc *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_0, VAR_1->count_type);
 FUNC_0(VAR_0, VAR_1->duration);
 FUNC_0(VAR_0, VAR_1->interval);
 FUNC_0(VAR_0, VAR_1->start_time);
}
