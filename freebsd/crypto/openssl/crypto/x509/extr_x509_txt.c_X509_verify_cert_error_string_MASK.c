
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(long VAR_0)
{
    switch ((int)VAR_0) {
    case 128:
        return "ok";
    case 133:
        return "unspecified certificate verification error";
    case 139:
        return "unable to get issuer certificate";
    case 141:
        return "unable to get certificate CRL";
    case 143:
        return "unable to decrypt certificate's signature";
    case 142:
        return "unable to decrypt CRL's signature";
    case 144:
        return "unable to decode issuer public key";
    case 193:
        return "certificate signature failure";
    case 188:
        return "CRL signature failure";
    case 196:
        return "certificate is not yet valid";
    case 197:
        return "certificate has expired";
    case 190:
        return "CRL is not yet valid";
    case 191:
        return "CRL has expired";
    case 181:
        return "format error in certificate's notBefore field";
    case 182:
        return "format error in certificate's notAfter field";
    case 180:
        return "format error in CRL's lastUpdate field";
    case 179:
        return "format error in CRL's nextUpdate field";
    case 161:
        return "out of memory";
    case 186:
        return "self signed certificate";
    case 154:
        return "self signed certificate in certificate chain";
    case 138:
        return "unable to get local issuer certificate";
    case 137:
        return "unable to verify the first certificate";
    case 198:
        return "certificate chain too long";
    case 194:
        return "certificate revoked";
    case 176:
        return "invalid CA certificate";
    case 160:
        return "path length constraint exceeded";
    case 171:
        return "unsupported certificate purpose";
    case 192:
        return "certificate not trusted";
    case 195:
        return "certificate rejected";
    case 152:
        return "subject issuer mismatch";
    case 202:
        return "authority and subject key identifier mismatch";
    case 203:
        return "authority and issuer serial number mismatch";
    case 169:
        return "key usage does not include certificate signing";
    case 140:
        return "unable to get CRL issuer certificate";
    case 135:
        return "unhandled critical extension";
    case 168:
        return "key usage does not include CRL signing";
    case 136:
        return "unhandled critical CRL extension";
    case 173:
        return "invalid non-CA certificate (has CA markings)";
    case 156:
        return "proxy path length constraint exceeded";
    case 167:
        return "key usage does not include digital signature";
    case 157:
        return
            "proxy certificates not allowed, please set the appropriate flag";
    case 174:
        return "invalid or inconsistent certificate extension";
    case 172:
        return "invalid or inconsistent certificate policy extension";
    case 166:
        return "no explicit policy";
    case 185:
        return "Different CRL scope";
    case 130:
        return "Unsupported extension feature";
    case 134:
        return "RFC 3779 resource not subset of parent's resources";
    case 158:
        return "permitted subtree violation";
    case 178:
        return "excluded subtree violation";
    case 151:
        return "name constraints minimum and maximum not supported";
    case 201:
        return "application verification failure";
    case 131:
        return "unsupported name constraint type";
    case 132:
        return "unsupported or invalid name constraint syntax";
    case 129:
        return "unsupported or invalid name syntax";
    case 189:
        return "CRL path validation error";
    case 159:
        return "Path Loop";
    case 146:
        return "Suite B: certificate version invalid";
    case 149:
        return "Suite B: invalid public key algorithm";
    case 148:
        return "Suite B: invalid ECC curve";
    case 147:
        return "Suite B: invalid signature algorithm";
    case 145:
        return "Suite B: curve not allowed for this LOS";
    case 150:
        return "Suite B: cannot sign P-384 with P-256";
    case 177:
        return "Hostname mismatch";
    case 183:
        return "Email address mismatch";
    case 170:
        return "IP address mismatch";
    case 187:
        return "No matching DANE TLSA records";
    case 184:
        return "EE certificate key too weak";
    case 200:
        return "CA certificate key too weak";
    case 199:
        return "CA signature digest algorithm too weak";
    case 175:
        return "Invalid certificate verification context";
    case 153:
        return "Issuer certificate lookup error";
    case 165:
        return "Certificate Transparency required, but no valid SCTs found";
    case 155:
        return "proxy subject name violation";
    case 162:
        return "OCSP verification needed";
    case 163:
        return "OCSP verification failed";
    case 164:
        return "OCSP unknown cert";

    default:

        return "unknown certificate verification error";
    }
}
