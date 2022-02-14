
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_4__ {int direction; scalar_t__ bufpos; scalar_t__ dataRead; scalar_t__ filePtr; int filedes; } ;
typedef TYPE_1__ apr_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static apr_status_t FUNC_2(apr_file_t *VAR_3, apr_off_t VAR_4 )
{
    apr_off_t VAR_5;
    apr_status_t VAR_6;

    if (VAR_3->direction == 1) {
        VAR_6 = FUNC_0(VAR_3);
        if (VAR_6) {
            return VAR_6;
        }
        VAR_3->bufpos = VAR_3->direction = VAR_3->dataRead = 0;
    }

    VAR_5 = VAR_4 - (VAR_3->filePtr - VAR_3->dataRead);
    if (VAR_5 >= 0 && VAR_5 <= VAR_3->dataRead) {
        VAR_3->bufpos = VAR_5;
        VAR_6 = VAR_0;
    }
    else {
        if (FUNC_1(VAR_3->filedes, VAR_4, VAR_1) != -1) {
            VAR_3->bufpos = VAR_3->dataRead = 0;
            VAR_3->filePtr = VAR_4;
            VAR_6 = VAR_0;
        }
        else {
            VAR_6 = VAR_2;
        }
    }

    return VAR_6;
}
