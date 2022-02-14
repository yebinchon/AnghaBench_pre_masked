
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tblentry {int cmdname; int cmdtype; struct tblentry* next; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tblentry* FUNC_0 (int) ;
 struct tblentry** VAR_4 ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 struct tblentry** VAR_5 ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static struct tblentry *
FUNC_4(const char *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 const char *VAR_9;
 struct tblentry *VAR_10;
 struct tblentry **VAR_11;
 size_t VAR_12;

 VAR_9 = VAR_6;
 VAR_8 = (unsigned char)*VAR_9 << 4;
 while (*VAR_9)
  VAR_8 += *VAR_9++;
 VAR_11 = &VAR_4[VAR_8 % VAR_0];
 for (VAR_10 = *VAR_11 ; VAR_10 ; VAR_10 = VAR_10->next) {
  if (FUNC_1(VAR_10->cmdname, VAR_6))
   break;
  VAR_11 = &VAR_10->next;
 }
 if (VAR_7 && VAR_10 == ((void*)0)) {
  VAR_2;
  VAR_12 = FUNC_3(VAR_6);
  VAR_10 = *VAR_11 = FUNC_0(sizeof (struct tblentry) + VAR_12 + 1);
  VAR_10->next = ((void*)0);
  VAR_10->cmdtype = VAR_1;
  FUNC_2(VAR_10->cmdname, VAR_6, VAR_12 + 1);
  VAR_3;
 }
 VAR_5 = VAR_11;
 return VAR_10;
}
