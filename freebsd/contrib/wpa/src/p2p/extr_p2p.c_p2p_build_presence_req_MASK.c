
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct wpabuf {int dummy; } ;
struct p2p_noa_desc {int count_type; void* interval; void* duration; } ;
typedef int desc2 ;
typedef int desc1 ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_noa_desc*,int ,int) ;
 int FUNC_1 (struct wpabuf*,int ,int) ;
 int * FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,int ,int ,int ,struct p2p_noa_desc*,struct p2p_noa_desc*) ;
 int FUNC_4 (struct wpabuf*,int *) ;
 struct wpabuf* FUNC_5 (int) ;

__attribute__((used)) static struct wpabuf * FUNC_6(u32 VAR_1, u32 VAR_2,
           u32 VAR_3, u32 VAR_4)
{
 struct wpabuf *VAR_5;
 struct p2p_noa_desc VAR_6, VAR_7, *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 u8 *VAR_10;

 VAR_5 = FUNC_5(100);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_1 || VAR_2) {
  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  VAR_6 = 1;
  VAR_6 = VAR_1;
  VAR_6 = VAR_2;
  VAR_8 = &VAR_6;

  if (VAR_3 || VAR_4) {
   FUNC_0(&VAR_7, 0, sizeof(VAR_7));
   VAR_7 = 2;
   VAR_7 = VAR_3;
   VAR_7 = VAR_4;
   VAR_9 = &VAR_7;
  }
 }

 FUNC_1(VAR_5, VAR_0, 1);
 VAR_10 = FUNC_2(VAR_5);
 FUNC_3(VAR_5, 0, 0, 0, VAR_8, VAR_9);
 FUNC_4(VAR_5, VAR_10);

 return VAR_5;
}
