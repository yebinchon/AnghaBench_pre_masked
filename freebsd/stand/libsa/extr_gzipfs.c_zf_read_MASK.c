
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t avail_out; scalar_t__ avail_in; char* msg; void* next_out; } ;
struct z_file {int zf_endseen; TYPE_1__ zf_zstream; } ;
struct open_file {scalar_t__ f_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct z_file*) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_4, void *VAR_5, size_t VAR_6, size_t *VAR_7)
{
    struct z_file *VAR_8 = (struct z_file *)VAR_4->f_fsdata;
    int VAR_9;

    VAR_8->zf_zstream.next_out = VAR_5;
    VAR_8->zf_zstream.avail_out = VAR_6;

    while (VAR_8->zf_zstream.avail_out && VAR_8->zf_endseen == 0) {
 if ((VAR_8->zf_zstream.avail_in == 0) && (FUNC_2(VAR_8) == -1)) {
     FUNC_1("zf_read: fill error\n");
     return(VAR_0);
 }
 if (VAR_8->zf_zstream.avail_in == 0) {
     FUNC_1("zf_read: unexpected EOF\n");
     if (VAR_8->zf_zstream.avail_out == VAR_6)
  return(VAR_0);
     break;
 }

 VAR_9 = FUNC_0(&VAR_8->zf_zstream, VAR_3);
 if (VAR_9 == VAR_2) {
     VAR_8->zf_endseen = 1;
     break;
 }
 if (VAR_9 != VAR_1) {
     FUNC_1("inflate: %s\n", VAR_8->zf_zstream.msg);
     return(VAR_0);
 }
    }
    if (VAR_7 != ((void*)0))
 *VAR_7 = VAR_8->zf_zstream.avail_out;
    return(0);
}
