
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int apr_size_t ;


 int VAR_0 ;
 char* FUNC_0 (unsigned int,int ,int*,char*,int*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static char *FUNC_2(struct in_addr *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
    unsigned VAR_4 = FUNC_1(VAR_1->s_addr);
    char *VAR_5 = VAR_2;
    int VAR_6;
    apr_size_t VAR_7;

    VAR_5 = FUNC_0((VAR_4 & 0x000000FF) , VAR_0, &VAR_6, VAR_5, &VAR_7);
    *--VAR_5 = '.';
    VAR_5 = FUNC_0((VAR_4 & 0x0000FF00) >> 8, VAR_0, &VAR_6, VAR_5, &VAR_7);
    *--VAR_5 = '.';
    VAR_5 = FUNC_0((VAR_4 & 0x00FF0000) >> 16, VAR_0, &VAR_6, VAR_5, &VAR_7);
    *--VAR_5 = '.';
    VAR_5 = FUNC_0((VAR_4 & 0xFF000000) >> 24, VAR_0, &VAR_6, VAR_5, &VAR_7);

    *VAR_3 = VAR_2 - VAR_5;
    return (VAR_5);
}
