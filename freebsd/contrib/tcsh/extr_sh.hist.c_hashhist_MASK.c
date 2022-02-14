
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {char* word; struct wordent* next; } ;
struct hashValue {int dummy; } ;


 int FUNC_0 (struct hashValue*,char) ;
 int FUNC_1 (struct hashValue*,char*) ;
 unsigned int FUNC_2 (struct hashValue*) ;
 int FUNC_3 (struct hashValue*) ;

__attribute__((used)) static unsigned
FUNC_4(struct wordent *VAR_0)
{
    struct hashValue VAR_1;
    struct wordent *VAR_2 = VAR_0->next;
    struct wordent *VAR_3 = VAR_2;
    unsigned VAR_4 = 0;

    FUNC_3(&VAR_1);
    for (; VAR_3 != VAR_0; VAR_3 = VAR_3->next) {
        if (VAR_3->word[0] == '\n')
            break;
        if (VAR_3 != VAR_2)
            FUNC_0(&VAR_1, ' ');
 FUNC_1(&VAR_1, VAR_3->word);
    }
    VAR_4 = FUNC_2(&VAR_1);

    return VAR_4 ? VAR_4 : 0x7fffffff;
}
