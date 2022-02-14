
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,int ,int ) ;
 struct wpabuf* FUNC_1 (int) ;

__attribute__((used)) static struct wpabuf * FUNC_2(void)
{
 struct wpabuf *VAR_1;

 VAR_1 = FUNC_1(100);
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_1, VAR_0, 0);

 return VAR_1;
}
