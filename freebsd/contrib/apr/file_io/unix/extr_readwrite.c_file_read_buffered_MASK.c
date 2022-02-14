
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_ssize_t ;
typedef int apr_size_t ;
struct TYPE_4__ {int direction; scalar_t__ bufpos; scalar_t__ dataRead; int ungetchar; scalar_t__ buffer; int filePtr; int eof_hit; int bufsize; int filedes; } ;
typedef TYPE_1__ apr_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static apr_status_t FUNC_3(apr_file_t *VAR_3, void *VAR_4,
                                       apr_size_t *VAR_5)
{
    apr_ssize_t VAR_6;
    char *VAR_7 = (char *)VAR_4;
    apr_uint64_t VAR_8;
    apr_uint64_t VAR_9 = *VAR_5;

    if (VAR_3->direction == 1) {
        VAR_6 = FUNC_0(VAR_3);
        if (VAR_6) {
            return VAR_6;
        }
        VAR_3->bufpos = 0;
        VAR_3->direction = 0;
        VAR_3->dataRead = 0;
    }

    VAR_6 = 0;
    if (VAR_3->ungetchar != -1) {
        *VAR_7 = (char)VAR_3->ungetchar;
        ++VAR_7;
        --VAR_9;
        VAR_3->ungetchar = -1;
    }
    while (VAR_6 == 0 && VAR_9 > 0) {
        if (VAR_3->bufpos >= VAR_3->dataRead) {
            int VAR_10 = FUNC_2(VAR_3->filedes, VAR_3->buffer,
                                 VAR_3->bufsize);
            if (VAR_10 == 0) {
                VAR_3->eof_hit = VAR_1;
                VAR_6 = VAR_0;
                break;
            }
            else if (VAR_10 == -1) {
                VAR_6 = VAR_2;
                break;
            }
            VAR_3->dataRead = VAR_10;
            VAR_3->filePtr += VAR_3->dataRead;
            VAR_3->bufpos = 0;
        }

        VAR_8 = VAR_9 > VAR_3->dataRead - VAR_3->bufpos ? VAR_3->dataRead - VAR_3->bufpos : VAR_9;
        FUNC_1(VAR_7, VAR_3->buffer + VAR_3->bufpos, VAR_8);
        VAR_3->bufpos += VAR_8;
        VAR_7 += VAR_8;
        VAR_9 -= VAR_8;
    }

    *VAR_5 = VAR_7 - (char *)VAR_4;
    if (*VAR_5) {
        VAR_6 = 0;
    }
    return VAR_6;
}
