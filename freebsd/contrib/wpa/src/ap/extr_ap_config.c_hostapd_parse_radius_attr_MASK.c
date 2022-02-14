
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_radius_attr {void* val; int type; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,size_t) ;
 int FUNC_2 (struct hostapd_radius_attr*) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;
 struct hostapd_radius_attr* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (char const*,size_t) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,size_t) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int ) ;

struct hostapd_radius_attr * FUNC_12(const char *VAR_0)
{
 const char *VAR_1;
 char VAR_2;
 struct hostapd_radius_attr *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_5(sizeof(*VAR_3));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->type = FUNC_0(VAR_0);

 VAR_1 = FUNC_3(VAR_0, ':');
 if (!VAR_1) {
  VAR_3->val = FUNC_6(1);
  if (!VAR_3->val) {
   FUNC_2(VAR_3);
   return ((void*)0);
  }
  FUNC_11(VAR_3->val, 0);
  return VAR_3;
 }

 VAR_1++;
 if (VAR_1[0] == '\0' || VAR_1[1] != ':') {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 VAR_2 = *VAR_1++;
 VAR_1++;

 switch (VAR_2) {
 case 's':
  VAR_3->val = FUNC_7(VAR_1, FUNC_4(VAR_1));
  break;
 case 'x':
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4 & 1)
   break;
  VAR_4 /= 2;
  VAR_3->val = FUNC_6(VAR_4);
  if (!VAR_3->val)
   break;
  if (FUNC_1(VAR_1, FUNC_9(VAR_3->val, VAR_4), VAR_4) < 0) {
   FUNC_8(VAR_3->val);
   FUNC_2(VAR_3);
   return ((void*)0);
  }
  break;
 case 'd':
  VAR_3->val = FUNC_6(4);
  if (VAR_3->val)
   FUNC_10(VAR_3->val, FUNC_0(VAR_1));
  break;
 default:
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 if (!VAR_3->val) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
