
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* libzfs_desc; int libzfs_error; } ;
typedef TYPE_1__ libzfs_handle_t ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (int ,char*) ;

const char *
FUNC_2(libzfs_handle_t *VAR_1)
{
 if (VAR_1->libzfs_desc[0] != '\0')
  return (VAR_1->libzfs_desc);

 switch (VAR_1->libzfs_error) {
 case 168:
  return (FUNC_1(VAR_0, "out of memory"));
 case 201:
  return (FUNC_1(VAR_0, "invalid property value"));
 case 150:
  return (FUNC_1(VAR_0, "read-only property"));
 case 148:
  return (FUNC_1(VAR_0, "property doesn't apply to "
      "datasets of this type"));
 case 151:
  return (FUNC_1(VAR_0, "property cannot be inherited"));
 case 149:
  return (FUNC_1(VAR_0, "invalid quota or reservation"));
 case 197:
  return (FUNC_1(VAR_0, "operation not applicable to "
      "datasets of this type"));
 case 194:
  return (FUNC_1(VAR_0, "pool or dataset is busy"));
 case 185:
  return (FUNC_1(VAR_0, "pool or dataset exists"));
 case 170:
  return (FUNC_1(VAR_0, "no such pool or dataset"));
 case 199:
  return (FUNC_1(VAR_0, "invalid backup stream"));
 case 186:
  return (FUNC_1(VAR_0, "dataset is read-only"));
 case 129:
  return (FUNC_1(VAR_0, "volume size exceeds limit for "
      "this system"));
 case 180:
  return (FUNC_1(VAR_0, "invalid name"));
 case 200:
  return (FUNC_1(VAR_0, "unable to restore to "
      "destination"));
 case 207:
  return (FUNC_1(VAR_0, "backup failed"));
 case 198:
  return (FUNC_1(VAR_0, "invalid target vdev"));
 case 171:
  return (FUNC_1(VAR_0, "no such device in pool"));
 case 205:
  return (FUNC_1(VAR_0, "invalid device"));
 case 167:
  return (FUNC_1(VAR_0, "no valid replicas"));
 case 144:
  return (FUNC_1(VAR_0, "currently resilvering"));
 case 196:
  return (FUNC_1(VAR_0, "unsupported version or "
      "feature"));
 case 155:
  return (FUNC_1(VAR_0, "pool is unavailable"));
 case 191:
  return (FUNC_1(VAR_0, "too many devices in one vdev"));
 case 204:
  return (FUNC_1(VAR_0, "must be an absolute path"));
 case 192:
  return (FUNC_1(VAR_0, "operation crosses datasets or "
      "pools"));
 case 128:
  return (FUNC_1(VAR_0, "dataset in use by local zone"));
 case 175:
  return (FUNC_1(VAR_0, "mount failed"));
 case 136:
  return (FUNC_1(VAR_0, "umount failed"));
 case 133:
  return (FUNC_1(VAR_0, "unshare(1M) failed"));
 case 141:
  return (FUNC_1(VAR_0, "share(1M) failed"));
 case 132:
  return (FUNC_1(VAR_0, "smb remove share failed"));
 case 140:
  return (FUNC_1(VAR_0, "smb add share failed"));
 case 159:
  return (FUNC_1(VAR_0, "permission denied"));
 case 166:
  return (FUNC_1(VAR_0, "out of space"));
 case 184:
  return (FUNC_1(VAR_0, "bad address"));
 case 179:
  return (FUNC_1(VAR_0, "I/O error"));
 case 182:
  return (FUNC_1(VAR_0, "signal received"));
 case 177:
  return (FUNC_1(VAR_0, "device is reserved as a hot "
      "spare"));
 case 181:
  return (FUNC_1(VAR_0, "invalid vdev configuration"));
 case 147:
  return (FUNC_1(VAR_0, "recursive dataset dependency"));
 case 169:
  return (FUNC_1(VAR_0, "no history available"));
 case 157:
  return (FUNC_1(VAR_0, "failed to retrieve "
      "pool properties"));
 case 153:
  return (FUNC_1(VAR_0, "operation not supported "
      "on this type of pool"));
 case 154:
  return (FUNC_1(VAR_0, "invalid argument for "
      "this pool operation"));
 case 174:
  return (FUNC_1(VAR_0, "dataset name is too long"));
 case 160:
  return (FUNC_1(VAR_0, "open failed"));
 case 173:
  return (FUNC_1(VAR_0,
      "disk capacity information could not be retrieved"));
 case 176:
  return (FUNC_1(VAR_0, "write of label failed"));
 case 195:
  return (FUNC_1(VAR_0, "invalid user/group"));
 case 203:
  return (FUNC_1(VAR_0, "invalid permission"));
 case 202:
  return (FUNC_1(VAR_0, "invalid permission set name"));
 case 172:
  return (FUNC_1(VAR_0, "delegated administration is "
      "disabled on pool"));
 case 206:
  return (FUNC_1(VAR_0, "invalid or missing cache file"));
 case 178:
  return (FUNC_1(VAR_0, "device is in use as a cache"));
 case 131:
  return (FUNC_1(VAR_0, "vdev specification is not "
      "supported"));
 case 165:
  return (FUNC_1(VAR_0, "operation not supported "
      "on this dataset"));
 case 208:
  return (FUNC_1(VAR_0, "pool has active shared spare "
      "device"));
 case 134:
  return (FUNC_1(VAR_0, "log device has unplayed intent "
      "logs"));
 case 145:
  return (FUNC_1(VAR_0, "no such tag on this dataset"));
 case 146:
  return (FUNC_1(VAR_0, "tag already exists on this "
      "dataset"));
 case 139:
  return (FUNC_1(VAR_0, "tag too long"));
 case 158:
  return (FUNC_1(VAR_0, "pipe create failed"));
 case 138:
  return (FUNC_1(VAR_0, "thread create failed"));
 case 152:
  return (FUNC_1(VAR_0, "disk was split from this pool "
      "into a new one"));
 case 142:
  return (FUNC_1(VAR_0, "scrub is paused; "
      "use 'zpool scrub' to resume"));
 case 143:
  return (FUNC_1(VAR_0, "currently scrubbing; "
      "use 'zpool scrub -s' to cancel current scrub"));
 case 161:
  return (FUNC_1(VAR_0, "there is no active scrub"));
 case 189:
  return (FUNC_1(VAR_0, "unable to generate diffs"));
 case 188:
  return (FUNC_1(VAR_0, "invalid diff data"));
 case 156:
  return (FUNC_1(VAR_0, "pool is read-only"));
 case 162:
  return (FUNC_1(VAR_0, "operation is not "
      "in progress"));
 case 193:
  return (FUNC_1(VAR_0, "checkpoint exists"));
 case 187:
  return (FUNC_1(VAR_0, "currently discarding "
      "checkpoint"));
 case 164:
  return (FUNC_1(VAR_0, "checkpoint does not exist"));
 case 190:
  return (FUNC_1(VAR_0, "device removal in progress"));
 case 130:
  return (FUNC_1(VAR_0, "device exceeds supported size"));
 case 137:
  return (FUNC_1(VAR_0, "argument list too long"));
 case 183:
  return (FUNC_1(VAR_0, "currently initializing"));
 case 163:
  return (FUNC_1(VAR_0, "there is no active "
      "initialization"));
 case 135:
  return (FUNC_1(VAR_0, "unknown error"));
 default:
  FUNC_0(VAR_1->libzfs_error == 0);
  return (FUNC_1(VAR_0, "no error"));
 }
}
