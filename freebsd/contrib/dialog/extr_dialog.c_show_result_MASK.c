
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int output_count; char* separate_str; int output; } ;
struct TYPE_3__ {char* input_result; int separate_output; } ;


 char* VAR_0 ;




 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_5)
{
    bool VAR_6 = VAR_1;

    switch (VAR_5) {
    case 128:
    case 131:
    case 130:
    case 129:
 if ((VAR_3.output_count > 1) && !VAR_4.separate_output) {
     FUNC_2((VAR_3.separate_str
     ? VAR_3.separate_str
     : VAR_0),
    VAR_3.output);
     VAR_6 = VAR_2;
 }
 if (VAR_4.input_result != 0
     && VAR_4.input_result[0] != '\0') {
     FUNC_2(VAR_4.input_result, VAR_3.output);
     FUNC_0(("# input_result:\n%s\n", VAR_4.input_result));
     VAR_6 = VAR_2;
 }
 if (VAR_6) {
     FUNC_1(VAR_3.output);
 }
 break;
    }
    return VAR_5;
}
