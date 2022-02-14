
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const spa_feature_t ;


 int const VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;


 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;

 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int const,char*,char*,char*,int,int const*) ;

void
FUNC_1(void)
{
 FUNC_0(VAR_0,
     "com.delphix:async_destroy", "async_destroy",
     "Destroy filesystems asynchronously.",
     VAR_20, ((void*)0));

 FUNC_0(VAR_4,
     "com.delphix:empty_bpobj", "empty_bpobj",
     "Snapshots use less space.",
     VAR_20, ((void*)0));

 FUNC_0(VAR_9,
     "org.illumos:lz4_compress", "lz4_compress",
     "LZ4 compression algorithm support.",
     VAR_17, ((void*)0));

 FUNC_0(VAR_10,
     "com.joyent:multi_vdev_crash_dump", "multi_vdev_crash_dump",
     "Crash dumps to multiple vdev pools.",
     0, ((void*)0));

 FUNC_0(VAR_15,
     "com.delphix:spacemap_histogram", "spacemap_histogram",
     "Spacemaps maintain space histograms.",
     VAR_20, ((void*)0));

 FUNC_0(130,
     "com.delphix:enabled_txg", "enabled_txg",
     "Record txg at which a feature is enabled",
     VAR_20, ((void*)0));

 static spa_feature_t VAR_21[] = { 130,
     128 };
 FUNC_0(VAR_6,
     "com.delphix:hole_birth", "hole_birth",
     "Retain hole birth txg for more precise zfs send",
     VAR_18 | VAR_17,
     VAR_21);

 FUNC_0(129,
     "com.delphix:extensible_dataset", "extensible_dataset",
     "Enhanced dataset functionality, used by other features.",
     0, ((void*)0));

 static const spa_feature_t VAR_22[] = {
  129,
  128
 };
 FUNC_0(VAR_1,
     "com.delphix:bookmarks", "bookmarks",
     "\"zfs bookmark\" command",
     VAR_20, VAR_22);

 static const spa_feature_t VAR_23[] = {
     129,
     128
 };
 FUNC_0(VAR_5,
     "com.joyent:filesystem_limits", "filesystem_limits",
     "Filesystem and snapshot limits.",
     VAR_20, VAR_23);

 FUNC_0(VAR_3,
     "com.delphix:embedded_data", "embedded_data",
     "Blocks which compress very well use even less space.",
     VAR_18 | VAR_17,
     ((void*)0));

 FUNC_0(VAR_12,
     "com.delphix:zpool_checkpoint", "zpool_checkpoint",
     "Pool state can be checkpointed, allowing rewind later.",
     VAR_20, ((void*)0));

 FUNC_0(VAR_16,
     "com.delphix:spacemap_v2", "spacemap_v2",
     "Space maps representing large segments are more efficient.",
     VAR_20 | VAR_17,
     ((void*)0));

 static const spa_feature_t VAR_24[] = {
  129,
  128
 };
 FUNC_0(VAR_7,
     "org.open-zfs:large_blocks", "large_blocks",
     "Support for blocks larger than 128KB.",
     VAR_19, VAR_24);

 {
 static const spa_feature_t VAR_25[] = {
  129,
  128
 };
 FUNC_0(VAR_8,
     "org.zfsonlinux:large_dnode", "large_dnode",
     "Variable on-disk size of dnodes.",
     VAR_19, VAR_25);
 }

 static const spa_feature_t VAR_26[] = {
  129,
  128
 };
 FUNC_0(VAR_13,
     "org.illumos:sha512", "sha512",
     "SHA-512/256 hash algorithm.",
     VAR_19, VAR_26);

 static const spa_feature_t VAR_27[] = {
  129,
  128
 };
 FUNC_0(VAR_14,
     "org.illumos:skein", "skein",
     "Skein hash algorithm.",
     VAR_19, VAR_27);
 FUNC_0(131,
     "com.delphix:device_removal", "device_removal",
     "Top-level vdevs can be removed, reducing logical pool size.",
     VAR_18, ((void*)0));

 static const spa_feature_t VAR_28[] = {
  129,
  131,
  128
 };
 FUNC_0(VAR_11,
     "com.delphix:obsolete_counts", "obsolete_counts",
     "Reduce memory used by removed devices when their blocks are "
     "freed or remapped.",
     VAR_20, VAR_28);
}
