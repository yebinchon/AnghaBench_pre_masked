
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_aka_data {int * id_msgs; } ;


 int * FUNC_0 (struct wpabuf const*) ;
 int FUNC_1 (struct wpabuf const*) ;
 int FUNC_2 (int *,struct wpabuf const*) ;
 scalar_t__ FUNC_3 (int **,int ) ;

__attribute__((used)) static int FUNC_4(struct eap_aka_data *VAR_0,
         const struct wpabuf *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return -1;

 if (VAR_0->id_msgs == ((void*)0)) {
  VAR_0->id_msgs = FUNC_0(VAR_1);
  return VAR_0->id_msgs == ((void*)0) ? -1 : 0;
 }

 if (FUNC_3(&VAR_0->id_msgs, FUNC_1(VAR_1)) < 0)
  return -1;
 FUNC_2(VAR_0->id_msgs, VAR_1);

 return 0;
}
