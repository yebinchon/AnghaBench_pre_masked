
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef int len_buf ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct wpabuf*,char*,char const*) ;
 scalar_t__ FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_6(struct wpabuf *VAR_1, const char *VAR_2,
       char *VAR_3, char *VAR_4)
{
 char VAR_5[10];
 FUNC_3(VAR_1, "</u:%s>\n", VAR_2);
 FUNC_5(VAR_1, VAR_0);
 FUNC_1(VAR_5, sizeof(VAR_5), "%d",
      (int) ((char *) FUNC_4(VAR_1, 0) - VAR_4));
 FUNC_0(VAR_3, VAR_5, FUNC_2(VAR_5));
}
