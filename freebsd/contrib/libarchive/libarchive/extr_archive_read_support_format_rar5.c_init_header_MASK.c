
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct archive_read* VAR_1) {
 VAR_1->archive.archive_format = VAR_0;
 VAR_1->archive.archive_format_name = "RAR5";
}
