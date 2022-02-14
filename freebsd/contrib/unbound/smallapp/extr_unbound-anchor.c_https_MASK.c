
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_list {int used; } ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct ip_list*,char const*,char const*) ;
 struct ip_list* FUNC_3 (struct ip_list*) ;
 int FUNC_4 (char*,char const*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (struct ip_list*) ;

__attribute__((used)) static BIO*
FUNC_6(struct ip_list* VAR_1, const char* VAR_2, const char* VAR_3)
{
 struct ip_list* VAR_4;
 BIO* VAR_5 = ((void*)0);

 FUNC_5(VAR_1);
 while( (VAR_4 = FUNC_3(VAR_1)) ) {
  VAR_4->used = 1;
  VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
  if(VAR_5) break;
 }
 if(!VAR_5) {
  if(VAR_0) FUNC_4("could not fetch %s\n", VAR_2);
  FUNC_1(0);
 } else {
  if(VAR_0) FUNC_4("fetched %s (%d bytes)\n",
   VAR_2, (int)FUNC_0(VAR_5));
 }
 return VAR_5;
}
