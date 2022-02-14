
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_write_out {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct fuse_ticket {int tk_data; TYPE_1__ tk_ms_fiov; } ;
struct fuse_statfs_out {int dummy; } ;
struct fuse_read_in {size_t size; } ;
struct fuse_open_out {int dummy; } ;
struct fuse_lk_out {int dummy; } ;
struct fuse_init_out {int dummy; } ;
struct fuse_in_header {int dummy; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_bmap_out {int dummy; } ;
struct fuse_attr_out {int dummy; } ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;


 int VAR_0 ;


 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct fuse_ticket*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct fuse_ticket *VAR_7, size_t VAR_8)
{
 int VAR_9 = 0;
 enum fuse_opcode VAR_10;

 VAR_10 = FUNC_0(VAR_7);

 switch (VAR_10) {
 case 161:
  VAR_9 = (VAR_8 == sizeof(struct fuse_bmap_out)) ? 0 : VAR_0;
  break;

 case 150:
 case 148:
 case 147:
 case 146:
 case 130:
  if (FUNC_1(VAR_7->tk_data, 7, 9)) {
   VAR_9 = (VAR_8 == sizeof(struct fuse_entry_out)) ?
    0 : VAR_0;
  } else {
   VAR_9 = (VAR_8 == VAR_3) ? 0 : VAR_0;
  }
  break;

 case 157:
  FUNC_2("FUSE: a handler has been intalled for FUSE_FORGET");
  break;

 case 154:
 case 135:
  if (FUNC_1(VAR_7->tk_data, 7, 9)) {
   VAR_9 = (VAR_8 == sizeof(struct fuse_attr_out)) ?
     0 : VAR_0;
  } else {
   VAR_9 = (VAR_8 == VAR_2) ? 0 : VAR_0;
  }
  break;

 case 141:
  VAR_9 = (VAR_6 >= VAR_8) ? 0 : VAR_0;
  break;

 case 129:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 136:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 137:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 145:
  VAR_9 = (VAR_8 == sizeof(struct fuse_open_out)) ? 0 : VAR_0;
  break;

 case 143:
  VAR_9 = (((struct fuse_read_in *)(
      (char *)VAR_7->tk_ms_fiov.base +
      sizeof(struct fuse_in_header)
      ))->size >= VAR_8) ? 0 : VAR_0;
  break;

 case 128:
  VAR_9 = (VAR_8 == sizeof(struct fuse_write_out)) ? 0 : VAR_0;
  break;

 case 131:
  if (FUNC_1(VAR_7->tk_data, 7, 4)) {
   VAR_9 = (VAR_8 == sizeof(struct fuse_statfs_out)) ?
     0 : VAR_0;
  } else {
   VAR_9 = (VAR_8 == VAR_5) ? 0 : VAR_0;
  }
  break;

 case 140:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 156:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 132:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 152:
 case 149:




  VAR_9 = 0;
  break;

 case 138:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 158:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 151:
  if (VAR_8 == sizeof(struct fuse_init_out) ||
      VAR_8 == VAR_4 ||
      VAR_8 == VAR_1) {
   VAR_9 = 0;
  } else {
   VAR_9 = VAR_0;
  }
  break;

 case 144:
  VAR_9 = (VAR_8 == sizeof(struct fuse_open_out)) ? 0 : VAR_0;
  break;

 case 142:
  VAR_9 = (((struct fuse_read_in *)(
      (char *)VAR_7->tk_ms_fiov.base +
      sizeof(struct fuse_in_header)
      ))->size >= VAR_8) ? 0 : VAR_0;
  break;

 case 139:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 155:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 153:
  VAR_9 = (VAR_8 == sizeof(struct fuse_lk_out)) ? 0 : VAR_0;
  break;

 case 134:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 133:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 162:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 case 160:
  if (FUNC_1(VAR_7->tk_data, 7, 9)) {
   VAR_9 = (VAR_8 == sizeof(struct fuse_entry_out) +
       sizeof(struct fuse_open_out)) ? 0 : VAR_0;
  } else {
   VAR_9 = (VAR_8 == VAR_3 +
       sizeof(struct fuse_open_out)) ? 0 : VAR_0;
  }
  break;

 case 159:
  VAR_9 = (VAR_8 == 0) ? 0 : VAR_0;
  break;

 default:
  FUNC_2("FUSE: opcodes out of sync (%d)\n", VAR_10);
 }

 return VAR_9;
}
