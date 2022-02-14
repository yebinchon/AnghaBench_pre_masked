
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_socktype; int ai_family; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct addrinfo *VAR_3, int VAR_4)
{
    FUNC_0(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->ai_family = VAR_0;
    switch(VAR_4) {
    case 128 :
 VAR_3->ai_socktype = VAR_1;
 break;
    case 130 :
    case 129 :
 VAR_3->ai_socktype = VAR_2;
 break;
    }
}
