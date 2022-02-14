
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct open_file {scalar_t__ f_fsdata; } ;
typedef int off_t ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {int offset; scalar_t__ c; TYPE_1__ de; } ;
typedef TYPE_2__ DOS_FILE ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static off_t
FUNC_1(struct open_file *VAR_2, off_t VAR_3, int VAR_4)
{
    off_t VAR_5;
    u_int VAR_6;
    DOS_FILE *VAR_7 = (DOS_FILE *)VAR_2->f_fsdata;

    VAR_6 = FUNC_0(VAR_7->de.size);
    switch (VAR_4) {
    case 128:
        VAR_5 = 0;
        break;
    case 130:
        VAR_5 = VAR_7->offset;
        break;
    case 129:
        VAR_5 = VAR_6;
        break;
    default:
 VAR_1 = VAR_0;
 return (-1);
    }
    VAR_5 += VAR_3;
    if (VAR_5 < 0 || VAR_5 > VAR_6) {
 VAR_1 = VAR_0;
        return (-1);
    }
    VAR_7->offset = (u_int)VAR_5;
    VAR_7->c = 0;
    return (VAR_5);
}
